// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaccesspointresponse.h"
#include "createaccesspointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::CreateAccessPointResponse
 * \brief The CreateAccessPointResponse class provides an interace for S3Control CreateAccessPoint responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::createAccessPoint
 */

/*!
 * Constructs a CreateAccessPointResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAccessPointResponse::CreateAccessPointResponse(
        const CreateAccessPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new CreateAccessPointResponsePrivate(this), parent)
{
    setRequest(new CreateAccessPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAccessPointRequest * CreateAccessPointResponse::request() const
{
    Q_D(const CreateAccessPointResponse);
    return static_cast<const CreateAccessPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control CreateAccessPoint \a response.
 */
void CreateAccessPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAccessPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::CreateAccessPointResponsePrivate
 * \brief The CreateAccessPointResponsePrivate class provides private implementation for CreateAccessPointResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a CreateAccessPointResponsePrivate object with public implementation \a q.
 */
CreateAccessPointResponsePrivate::CreateAccessPointResponsePrivate(
    CreateAccessPointResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control CreateAccessPoint response element from \a xml.
 */
void CreateAccessPointResponsePrivate::parseCreateAccessPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccessPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
