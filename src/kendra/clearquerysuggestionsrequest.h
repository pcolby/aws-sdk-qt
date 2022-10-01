// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLEARQUERYSUGGESTIONSREQUEST_H
#define QTAWS_CLEARQUERYSUGGESTIONSREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class ClearQuerySuggestionsRequestPrivate;

class QTAWSKENDRA_EXPORT ClearQuerySuggestionsRequest : public KendraRequest {

public:
    ClearQuerySuggestionsRequest(const ClearQuerySuggestionsRequest &other);
    ClearQuerySuggestionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ClearQuerySuggestionsRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
