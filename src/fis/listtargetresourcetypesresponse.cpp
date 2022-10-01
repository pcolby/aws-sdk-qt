// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtargetresourcetypesresponse.h"
#include "listtargetresourcetypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::ListTargetResourceTypesResponse
 * \brief The ListTargetResourceTypesResponse class provides an interace for Fis ListTargetResourceTypes responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::listTargetResourceTypes
 */

/*!
 * Constructs a ListTargetResourceTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTargetResourceTypesResponse::ListTargetResourceTypesResponse(
        const ListTargetResourceTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new ListTargetResourceTypesResponsePrivate(this), parent)
{
    setRequest(new ListTargetResourceTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTargetResourceTypesRequest * ListTargetResourceTypesResponse::request() const
{
    Q_D(const ListTargetResourceTypesResponse);
    return static_cast<const ListTargetResourceTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fis ListTargetResourceTypes \a response.
 */
void ListTargetResourceTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTargetResourceTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::ListTargetResourceTypesResponsePrivate
 * \brief The ListTargetResourceTypesResponsePrivate class provides private implementation for ListTargetResourceTypesResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a ListTargetResourceTypesResponsePrivate object with public implementation \a q.
 */
ListTargetResourceTypesResponsePrivate::ListTargetResourceTypesResponsePrivate(
    ListTargetResourceTypesResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis ListTargetResourceTypes response element from \a xml.
 */
void ListTargetResourceTypesResponsePrivate::parseListTargetResourceTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTargetResourceTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
