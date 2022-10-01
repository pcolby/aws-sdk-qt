// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfileuploadurlresponse.h"
#include "getfileuploadurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetFileUploadURLResponse
 * \brief The GetFileUploadURLResponse class provides an interace for MTurk GetFileUploadURL responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getFileUploadURL
 */

/*!
 * Constructs a GetFileUploadURLResponse object for \a reply to \a request, with parent \a parent.
 */
GetFileUploadURLResponse::GetFileUploadURLResponse(
        const GetFileUploadURLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetFileUploadURLResponsePrivate(this), parent)
{
    setRequest(new GetFileUploadURLRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFileUploadURLRequest * GetFileUploadURLResponse::request() const
{
    Q_D(const GetFileUploadURLResponse);
    return static_cast<const GetFileUploadURLRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk GetFileUploadURL \a response.
 */
void GetFileUploadURLResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFileUploadURLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::GetFileUploadURLResponsePrivate
 * \brief The GetFileUploadURLResponsePrivate class provides private implementation for GetFileUploadURLResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a GetFileUploadURLResponsePrivate object with public implementation \a q.
 */
GetFileUploadURLResponsePrivate::GetFileUploadURLResponsePrivate(
    GetFileUploadURLResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk GetFileUploadURL response element from \a xml.
 */
void GetFileUploadURLResponsePrivate::parseGetFileUploadURLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFileUploadURLResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
