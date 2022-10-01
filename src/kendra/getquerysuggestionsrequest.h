// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYSUGGESTIONSREQUEST_H
#define QTAWS_GETQUERYSUGGESTIONSREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class GetQuerySuggestionsRequestPrivate;

class QTAWSKENDRA_EXPORT GetQuerySuggestionsRequest : public KendraRequest {

public:
    GetQuerySuggestionsRequest(const GetQuerySuggestionsRequest &other);
    GetQuerySuggestionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQuerySuggestionsRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
