// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaccesscontrolconfigurationresponse.h"
#include "createaccesscontrolconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateAccessControlConfigurationResponse
 * \brief The CreateAccessControlConfigurationResponse class provides an interace for Kendra CreateAccessControlConfiguration responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createAccessControlConfiguration
 */

/*!
 * Constructs a CreateAccessControlConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAccessControlConfigurationResponse::CreateAccessControlConfigurationResponse(
        const CreateAccessControlConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new CreateAccessControlConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateAccessControlConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAccessControlConfigurationRequest * CreateAccessControlConfigurationResponse::request() const
{
    Q_D(const CreateAccessControlConfigurationResponse);
    return static_cast<const CreateAccessControlConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra CreateAccessControlConfiguration \a response.
 */
void CreateAccessControlConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAccessControlConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::CreateAccessControlConfigurationResponsePrivate
 * \brief The CreateAccessControlConfigurationResponsePrivate class provides private implementation for CreateAccessControlConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateAccessControlConfigurationResponsePrivate object with public implementation \a q.
 */
CreateAccessControlConfigurationResponsePrivate::CreateAccessControlConfigurationResponsePrivate(
    CreateAccessControlConfigurationResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra CreateAccessControlConfiguration response element from \a xml.
 */
void CreateAccessControlConfigurationResponsePrivate::parseCreateAccessControlConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccessControlConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
