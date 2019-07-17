/*
    Copyright 2013-2019 Paul Colby

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

#include "describeinputresponse.h"
#include "describeinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeInputResponse
 * \brief The DescribeInputResponse class provides an interace for MediaLive DescribeInput responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeInput
 */

/*!
 * Constructs a DescribeInputResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInputResponse::DescribeInputResponse(
        const DescribeInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DescribeInputResponsePrivate(this), parent)
{
    setRequest(new DescribeInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInputRequest * DescribeInputResponse::request() const
{
    Q_D(const DescribeInputResponse);
    return static_cast<const DescribeInputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DescribeInput \a response.
 */
void DescribeInputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DescribeInputResponsePrivate
 * \brief The DescribeInputResponsePrivate class provides private implementation for DescribeInputResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeInputResponsePrivate object with public implementation \a q.
 */
DescribeInputResponsePrivate::DescribeInputResponsePrivate(
    DescribeInputResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DescribeInput response element from \a xml.
 */
void DescribeInputResponsePrivate::parseDescribeInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
