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

#include "describeworldtemplateresponse.h"
#include "describeworldtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeWorldTemplateResponse
 * \brief The DescribeWorldTemplateResponse class provides an interace for RoboMaker DescribeWorldTemplate responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeWorldTemplate
 */

/*!
 * Constructs a DescribeWorldTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorldTemplateResponse::DescribeWorldTemplateResponse(
        const DescribeWorldTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeWorldTemplateResponsePrivate(this), parent)
{
    setRequest(new DescribeWorldTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorldTemplateRequest * DescribeWorldTemplateResponse::request() const
{
    Q_D(const DescribeWorldTemplateResponse);
    return static_cast<const DescribeWorldTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeWorldTemplate \a response.
 */
void DescribeWorldTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorldTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeWorldTemplateResponsePrivate
 * \brief The DescribeWorldTemplateResponsePrivate class provides private implementation for DescribeWorldTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeWorldTemplateResponsePrivate object with public implementation \a q.
 */
DescribeWorldTemplateResponsePrivate::DescribeWorldTemplateResponsePrivate(
    DescribeWorldTemplateResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeWorldTemplate response element from \a xml.
 */
void DescribeWorldTemplateResponsePrivate::parseDescribeWorldTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorldTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
