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

#include "updateanswerresponse.h"
#include "updateanswerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::UpdateAnswerResponse
 * \brief The UpdateAnswerResponse class provides an interace for WellArchitected UpdateAnswer responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::updateAnswer
 */

/*!
 * Constructs a UpdateAnswerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAnswerResponse::UpdateAnswerResponse(
        const UpdateAnswerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new UpdateAnswerResponsePrivate(this), parent)
{
    setRequest(new UpdateAnswerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAnswerRequest * UpdateAnswerResponse::request() const
{
    Q_D(const UpdateAnswerResponse);
    return static_cast<const UpdateAnswerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected UpdateAnswer \a response.
 */
void UpdateAnswerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAnswerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::UpdateAnswerResponsePrivate
 * \brief The UpdateAnswerResponsePrivate class provides private implementation for UpdateAnswerResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a UpdateAnswerResponsePrivate object with public implementation \a q.
 */
UpdateAnswerResponsePrivate::UpdateAnswerResponsePrivate(
    UpdateAnswerResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected UpdateAnswer response element from \a xml.
 */
void UpdateAnswerResponsePrivate::parseUpdateAnswerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAnswerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
