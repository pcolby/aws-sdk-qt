// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startcontentuploadresponse.h"
#include "startcontentuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::StartContentUploadResponse
 * \brief The StartContentUploadResponse class provides an interace for Wisdom StartContentUpload responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::startContentUpload
 */

/*!
 * Constructs a StartContentUploadResponse object for \a reply to \a request, with parent \a parent.
 */
StartContentUploadResponse::StartContentUploadResponse(
        const StartContentUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new StartContentUploadResponsePrivate(this), parent)
{
    setRequest(new StartContentUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartContentUploadRequest * StartContentUploadResponse::request() const
{
    Q_D(const StartContentUploadResponse);
    return static_cast<const StartContentUploadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom StartContentUpload \a response.
 */
void StartContentUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartContentUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::StartContentUploadResponsePrivate
 * \brief The StartContentUploadResponsePrivate class provides private implementation for StartContentUploadResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a StartContentUploadResponsePrivate object with public implementation \a q.
 */
StartContentUploadResponsePrivate::StartContentUploadResponsePrivate(
    StartContentUploadResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom StartContentUpload response element from \a xml.
 */
void StartContentUploadResponsePrivate::parseStartContentUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartContentUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
