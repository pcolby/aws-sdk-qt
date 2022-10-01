// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcustomentitytyperesponse.h"
#include "createcustomentitytyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateCustomEntityTypeResponse
 * \brief The CreateCustomEntityTypeResponse class provides an interace for Glue CreateCustomEntityType responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createCustomEntityType
 */

/*!
 * Constructs a CreateCustomEntityTypeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCustomEntityTypeResponse::CreateCustomEntityTypeResponse(
        const CreateCustomEntityTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateCustomEntityTypeResponsePrivate(this), parent)
{
    setRequest(new CreateCustomEntityTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCustomEntityTypeRequest * CreateCustomEntityTypeResponse::request() const
{
    Q_D(const CreateCustomEntityTypeResponse);
    return static_cast<const CreateCustomEntityTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateCustomEntityType \a response.
 */
void CreateCustomEntityTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCustomEntityTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateCustomEntityTypeResponsePrivate
 * \brief The CreateCustomEntityTypeResponsePrivate class provides private implementation for CreateCustomEntityTypeResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateCustomEntityTypeResponsePrivate object with public implementation \a q.
 */
CreateCustomEntityTypeResponsePrivate::CreateCustomEntityTypeResponsePrivate(
    CreateCustomEntityTypeResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateCustomEntityType response element from \a xml.
 */
void CreateCustomEntityTypeResponsePrivate::parseCreateCustomEntityTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCustomEntityTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
