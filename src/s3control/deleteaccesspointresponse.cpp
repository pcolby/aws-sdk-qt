// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccesspointresponse.h"
#include "deleteaccesspointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteAccessPointResponse
 * \brief The DeleteAccessPointResponse class provides an interace for S3Control DeleteAccessPoint responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteAccessPoint
 */

/*!
 * Constructs a DeleteAccessPointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccessPointResponse::DeleteAccessPointResponse(
        const DeleteAccessPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeleteAccessPointResponsePrivate(this), parent)
{
    setRequest(new DeleteAccessPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccessPointRequest * DeleteAccessPointResponse::request() const
{
    Q_D(const DeleteAccessPointResponse);
    return static_cast<const DeleteAccessPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DeleteAccessPoint \a response.
 */
void DeleteAccessPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccessPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeleteAccessPointResponsePrivate
 * \brief The DeleteAccessPointResponsePrivate class provides private implementation for DeleteAccessPointResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteAccessPointResponsePrivate object with public implementation \a q.
 */
DeleteAccessPointResponsePrivate::DeleteAccessPointResponsePrivate(
    DeleteAccessPointResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeleteAccessPoint response element from \a xml.
 */
void DeleteAccessPointResponsePrivate::parseDeleteAccessPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccessPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
