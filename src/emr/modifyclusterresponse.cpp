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

#include "modifyclusterresponse.h"
#include "modifyclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ModifyClusterResponse
 * \brief The ModifyClusterResponse class provides an interace for Emr ModifyCluster responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::modifyCluster
 */

/*!
 * Constructs a ModifyClusterResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyClusterResponse::ModifyClusterResponse(
        const ModifyClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ModifyClusterResponsePrivate(this), parent)
{
    setRequest(new ModifyClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyClusterRequest * ModifyClusterResponse::request() const
{
    Q_D(const ModifyClusterResponse);
    return static_cast<const ModifyClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr ModifyCluster \a response.
 */
void ModifyClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::ModifyClusterResponsePrivate
 * \brief The ModifyClusterResponsePrivate class provides private implementation for ModifyClusterResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ModifyClusterResponsePrivate object with public implementation \a q.
 */
ModifyClusterResponsePrivate::ModifyClusterResponsePrivate(
    ModifyClusterResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr ModifyCluster response element from \a xml.
 */
void ModifyClusterResponsePrivate::parseModifyClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
