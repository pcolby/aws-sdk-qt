// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createclassifierresponse.h"
#include "createclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateClassifierResponse
 * \brief The CreateClassifierResponse class provides an interace for Glue CreateClassifier responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createClassifier
 */

/*!
 * Constructs a CreateClassifierResponse object for \a reply to \a request, with parent \a parent.
 */
CreateClassifierResponse::CreateClassifierResponse(
        const CreateClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateClassifierResponsePrivate(this), parent)
{
    setRequest(new CreateClassifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateClassifierRequest * CreateClassifierResponse::request() const
{
    Q_D(const CreateClassifierResponse);
    return static_cast<const CreateClassifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateClassifier \a response.
 */
void CreateClassifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateClassifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateClassifierResponsePrivate
 * \brief The CreateClassifierResponsePrivate class provides private implementation for CreateClassifierResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateClassifierResponsePrivate object with public implementation \a q.
 */
CreateClassifierResponsePrivate::CreateClassifierResponsePrivate(
    CreateClassifierResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateClassifier response element from \a xml.
 */
void CreateClassifierResponsePrivate::parseCreateClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateClassifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
