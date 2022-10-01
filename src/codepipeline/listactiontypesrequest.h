// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIONTYPESREQUEST_H
#define QTAWS_LISTACTIONTYPESREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class ListActionTypesRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT ListActionTypesRequest : public CodePipelineRequest {

public:
    ListActionTypesRequest(const ListActionTypesRequest &other);
    ListActionTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListActionTypesRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
