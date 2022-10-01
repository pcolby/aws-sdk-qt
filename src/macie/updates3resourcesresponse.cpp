/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updates3resourcesresponse.h"
#include "updates3resourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::UpdateS3ResourcesResponse
 * \brief The UpdateS3ResourcesResponse class provides an interace for Macie UpdateS3Resources responses.
 *
 * \inmodule QtAwsMacie
 *
 *  <fullname>Amazon Macie Classic</fullname>
 * 
 *  Amazon Macie Classic has been discontinued and is no longer
 * 
 *  available>
 * 
 *  A new Amazon Macie is now available with significant design improvements and additional features, at a lower price and
 *  in most Amazon Web Services Regions. We encourage you to take advantage of the new and improved features, and benefit
 *  from the reduced cost. To learn about features and pricing for the new Macie, see <a
 *  href="http://aws.amazon.com/macie/">Amazon Macie</a>. To learn how to use the new Macie, see the <a
 *  href="https://docs.aws.amazon.com/macie/latest/user/what-is-macie.html">Amazon Macie User
 *
 * \sa MacieClient::updateS3Resources
 */

/*!
 * Constructs a UpdateS3ResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateS3ResourcesResponse::UpdateS3ResourcesResponse(
        const UpdateS3ResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MacieResponse(new UpdateS3ResourcesResponsePrivate(this), parent)
{
    setRequest(new UpdateS3ResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateS3ResourcesRequest * UpdateS3ResourcesResponse::request() const
{
    Q_D(const UpdateS3ResourcesResponse);
    return static_cast<const UpdateS3ResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie UpdateS3Resources \a response.
 */
void UpdateS3ResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateS3ResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie::UpdateS3ResourcesResponsePrivate
 * \brief The UpdateS3ResourcesResponsePrivate class provides private implementation for UpdateS3ResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a UpdateS3ResourcesResponsePrivate object with public implementation \a q.
 */
UpdateS3ResourcesResponsePrivate::UpdateS3ResourcesResponsePrivate(
    UpdateS3ResourcesResponse * const q) : MacieResponsePrivate(q)
{

}

/*!
 * Parses a Macie UpdateS3Resources response element from \a xml.
 */
void UpdateS3ResourcesResponsePrivate::parseUpdateS3ResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateS3ResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie
} // namespace QtAws
