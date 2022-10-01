// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUERYSUGGESTIONSBLOCKLISTREQUEST_H
#define QTAWS_CREATEQUERYSUGGESTIONSBLOCKLISTREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class CreateQuerySuggestionsBlockListRequestPrivate;

class QTAWSKENDRA_EXPORT CreateQuerySuggestionsBlockListRequest : public KendraRequest {

public:
    CreateQuerySuggestionsBlockListRequest(const CreateQuerySuggestionsBlockListRequest &other);
    CreateQuerySuggestionsBlockListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateQuerySuggestionsBlockListRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
