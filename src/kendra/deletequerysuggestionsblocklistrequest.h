// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUERYSUGGESTIONSBLOCKLISTREQUEST_H
#define QTAWS_DELETEQUERYSUGGESTIONSBLOCKLISTREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class DeleteQuerySuggestionsBlockListRequestPrivate;

class QTAWSKENDRA_EXPORT DeleteQuerySuggestionsBlockListRequest : public KendraRequest {

public:
    DeleteQuerySuggestionsBlockListRequest(const DeleteQuerySuggestionsBlockListRequest &other);
    DeleteQuerySuggestionsBlockListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQuerySuggestionsBlockListRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
