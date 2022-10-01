// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "selectobjectcontentresponse.h"
#include "selectobjectcontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::SelectObjectContentResponse
 * \brief The SelectObjectContentResponse class provides an interace for S3 SelectObjectContent responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::selectObjectContent
 */

/*!
 * Constructs a SelectObjectContentResponse object for \a reply to \a request, with parent \a parent.
 */
SelectObjectContentResponse::SelectObjectContentResponse(
        const SelectObjectContentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new SelectObjectContentResponsePrivate(this), parent)
{
    setRequest(new SelectObjectContentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SelectObjectContentRequest * SelectObjectContentResponse::request() const
{
    Q_D(const SelectObjectContentResponse);
    return static_cast<const SelectObjectContentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 SelectObjectContent \a response.
 */
void SelectObjectContentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SelectObjectContentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::SelectObjectContentResponsePrivate
 * \brief The SelectObjectContentResponsePrivate class provides private implementation for SelectObjectContentResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a SelectObjectContentResponsePrivate object with public implementation \a q.
 */
SelectObjectContentResponsePrivate::SelectObjectContentResponsePrivate(
    SelectObjectContentResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 SelectObjectContent response element from \a xml.
 */
void SelectObjectContentResponsePrivate::parseSelectObjectContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SelectObjectContentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
