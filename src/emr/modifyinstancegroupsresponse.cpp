// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyinstancegroupsresponse.h"
#include "modifyinstancegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ModifyInstanceGroupsResponse
 * \brief The ModifyInstanceGroupsResponse class provides an interace for Emr ModifyInstanceGroups responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::modifyInstanceGroups
 */

/*!
 * Constructs a ModifyInstanceGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyInstanceGroupsResponse::ModifyInstanceGroupsResponse(
        const ModifyInstanceGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ModifyInstanceGroupsResponsePrivate(this), parent)
{
    setRequest(new ModifyInstanceGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyInstanceGroupsRequest * ModifyInstanceGroupsResponse::request() const
{
    Q_D(const ModifyInstanceGroupsResponse);
    return static_cast<const ModifyInstanceGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr ModifyInstanceGroups \a response.
 */
void ModifyInstanceGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyInstanceGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::ModifyInstanceGroupsResponsePrivate
 * \brief The ModifyInstanceGroupsResponsePrivate class provides private implementation for ModifyInstanceGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ModifyInstanceGroupsResponsePrivate object with public implementation \a q.
 */
ModifyInstanceGroupsResponsePrivate::ModifyInstanceGroupsResponsePrivate(
    ModifyInstanceGroupsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr ModifyInstanceGroups response element from \a xml.
 */
void ModifyInstanceGroupsResponsePrivate::parseModifyInstanceGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyInstanceGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
