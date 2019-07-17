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

#include "setterminationprotectionresponse.h"
#include "setterminationprotectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::SetTerminationProtectionResponse
 * \brief The SetTerminationProtectionResponse class provides an interace for EMR SetTerminationProtection responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::setTerminationProtection
 */

/*!
 * Constructs a SetTerminationProtectionResponse object for \a reply to \a request, with parent \a parent.
 */
SetTerminationProtectionResponse::SetTerminationProtectionResponse(
        const SetTerminationProtectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new SetTerminationProtectionResponsePrivate(this), parent)
{
    setRequest(new SetTerminationProtectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetTerminationProtectionRequest * SetTerminationProtectionResponse::request() const
{
    Q_D(const SetTerminationProtectionResponse);
    return static_cast<const SetTerminationProtectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR SetTerminationProtection \a response.
 */
void SetTerminationProtectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetTerminationProtectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::SetTerminationProtectionResponsePrivate
 * \brief The SetTerminationProtectionResponsePrivate class provides private implementation for SetTerminationProtectionResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a SetTerminationProtectionResponsePrivate object with public implementation \a q.
 */
SetTerminationProtectionResponsePrivate::SetTerminationProtectionResponsePrivate(
    SetTerminationProtectionResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR SetTerminationProtection response element from \a xml.
 */
void SetTerminationProtectionResponsePrivate::parseSetTerminationProtectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetTerminationProtectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
