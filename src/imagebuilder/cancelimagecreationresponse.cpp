// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelimagecreationresponse.h"
#include "cancelimagecreationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CancelImageCreationResponse
 * \brief The CancelImageCreationResponse class provides an interace for ImageBuilder CancelImageCreation responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::cancelImageCreation
 */

/*!
 * Constructs a CancelImageCreationResponse object for \a reply to \a request, with parent \a parent.
 */
CancelImageCreationResponse::CancelImageCreationResponse(
        const CancelImageCreationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new CancelImageCreationResponsePrivate(this), parent)
{
    setRequest(new CancelImageCreationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelImageCreationRequest * CancelImageCreationResponse::request() const
{
    Q_D(const CancelImageCreationResponse);
    return static_cast<const CancelImageCreationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder CancelImageCreation \a response.
 */
void CancelImageCreationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelImageCreationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::CancelImageCreationResponsePrivate
 * \brief The CancelImageCreationResponsePrivate class provides private implementation for CancelImageCreationResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CancelImageCreationResponsePrivate object with public implementation \a q.
 */
CancelImageCreationResponsePrivate::CancelImageCreationResponsePrivate(
    CancelImageCreationResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder CancelImageCreation response element from \a xml.
 */
void CancelImageCreationResponsePrivate::parseCancelImageCreationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelImageCreationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
