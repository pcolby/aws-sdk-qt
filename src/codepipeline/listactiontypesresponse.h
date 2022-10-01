// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIONTYPESRESPONSE_H
#define QTAWS_LISTACTIONTYPESRESPONSE_H

#include "codepipelineresponse.h"
#include "listactiontypesrequest.h"

namespace QtAws {
namespace CodePipeline {

class ListActionTypesResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT ListActionTypesResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    ListActionTypesResponse(const ListActionTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListActionTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListActionTypesResponse)
    Q_DISABLE_COPY(ListActionTypesResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
