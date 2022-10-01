// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesecurityconfigurationresponse.h"
#include "deletesecurityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DeleteSecurityConfigurationResponse
 * \brief The DeleteSecurityConfigurationResponse class provides an interace for Emr DeleteSecurityConfiguration responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::deleteSecurityConfiguration
 */

/*!
 * Constructs a DeleteSecurityConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSecurityConfigurationResponse::DeleteSecurityConfigurationResponse(
        const DeleteSecurityConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new DeleteSecurityConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteSecurityConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSecurityConfigurationRequest * DeleteSecurityConfigurationResponse::request() const
{
    Q_D(const DeleteSecurityConfigurationResponse);
    return static_cast<const DeleteSecurityConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr DeleteSecurityConfiguration \a response.
 */
void DeleteSecurityConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSecurityConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::DeleteSecurityConfigurationResponsePrivate
 * \brief The DeleteSecurityConfigurationResponsePrivate class provides private implementation for DeleteSecurityConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DeleteSecurityConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteSecurityConfigurationResponsePrivate::DeleteSecurityConfigurationResponsePrivate(
    DeleteSecurityConfigurationResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr DeleteSecurityConfiguration response element from \a xml.
 */
void DeleteSecurityConfigurationResponsePrivate::parseDeleteSecurityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSecurityConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
