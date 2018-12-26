/*
    Copyright 2013-2018 Paul Colby

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

#include "updateinsightresponse.h"
#include "updateinsightresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::UpdateInsightResponse
 * \brief The UpdateInsightResponse class provides an interace for SecurityHub UpdateInsight responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::updateInsight
 */

/*!
 * Constructs a UpdateInsightResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInsightResponse::UpdateInsightResponse(
        const UpdateInsightRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new UpdateInsightResponsePrivate(this), parent)
{
    setRequest(new UpdateInsightRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInsightRequest * UpdateInsightResponse::request() const
{
    Q_D(const UpdateInsightResponse);
    return static_cast<const UpdateInsightRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub UpdateInsight \a response.
 */
void UpdateInsightResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateInsightResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::UpdateInsightResponsePrivate
 * \brief The UpdateInsightResponsePrivate class provides private implementation for UpdateInsightResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a UpdateInsightResponsePrivate object with public implementation \a q.
 */
UpdateInsightResponsePrivate::UpdateInsightResponsePrivate(
    UpdateInsightResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub UpdateInsight response element from \a xml.
 */
void UpdateInsightResponsePrivate::parseUpdateInsightResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInsightResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
