// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUERYSUGGESTIONSBLOCKLISTREQUEST_H
#define QTAWS_UPDATEQUERYSUGGESTIONSBLOCKLISTREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class UpdateQuerySuggestionsBlockListRequestPrivate;

class QTAWSKENDRA_EXPORT UpdateQuerySuggestionsBlockListRequest : public KendraRequest {

public:
    UpdateQuerySuggestionsBlockListRequest(const UpdateQuerySuggestionsBlockListRequest &other);
    UpdateQuerySuggestionsBlockListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQuerySuggestionsBlockListRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
