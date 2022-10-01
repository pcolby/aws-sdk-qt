// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createexclusionspreviewresponse.h"
#include "createexclusionspreviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::CreateExclusionsPreviewResponse
 * \brief The CreateExclusionsPreviewResponse class provides an interace for Inspector CreateExclusionsPreview responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::createExclusionsPreview
 */

/*!
 * Constructs a CreateExclusionsPreviewResponse object for \a reply to \a request, with parent \a parent.
 */
CreateExclusionsPreviewResponse::CreateExclusionsPreviewResponse(
        const CreateExclusionsPreviewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new CreateExclusionsPreviewResponsePrivate(this), parent)
{
    setRequest(new CreateExclusionsPreviewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateExclusionsPreviewRequest * CreateExclusionsPreviewResponse::request() const
{
    Q_D(const CreateExclusionsPreviewResponse);
    return static_cast<const CreateExclusionsPreviewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector CreateExclusionsPreview \a response.
 */
void CreateExclusionsPreviewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateExclusionsPreviewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::CreateExclusionsPreviewResponsePrivate
 * \brief The CreateExclusionsPreviewResponsePrivate class provides private implementation for CreateExclusionsPreviewResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a CreateExclusionsPreviewResponsePrivate object with public implementation \a q.
 */
CreateExclusionsPreviewResponsePrivate::CreateExclusionsPreviewResponsePrivate(
    CreateExclusionsPreviewResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector CreateExclusionsPreview response element from \a xml.
 */
void CreateExclusionsPreviewResponsePrivate::parseCreateExclusionsPreviewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExclusionsPreviewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
