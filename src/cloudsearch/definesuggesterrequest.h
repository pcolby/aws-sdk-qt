// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINESUGGESTERREQUEST_H
#define QTAWS_DEFINESUGGESTERREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class DefineSuggesterRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT DefineSuggesterRequest : public CloudSearchRequest {

public:
    DefineSuggesterRequest(const DefineSuggesterRequest &other);
    DefineSuggesterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DefineSuggesterRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
