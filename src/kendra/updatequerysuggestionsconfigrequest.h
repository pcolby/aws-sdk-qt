// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUERYSUGGESTIONSCONFIGREQUEST_H
#define QTAWS_UPDATEQUERYSUGGESTIONSCONFIGREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class UpdateQuerySuggestionsConfigRequestPrivate;

class QTAWSKENDRA_EXPORT UpdateQuerySuggestionsConfigRequest : public KendraRequest {

public:
    UpdateQuerySuggestionsConfigRequest(const UpdateQuerySuggestionsConfigRequest &other);
    UpdateQuerySuggestionsConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQuerySuggestionsConfigRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
