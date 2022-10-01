// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTNAMESUGGESTIONREQUEST_H
#define QTAWS_GETHOSTNAMESUGGESTIONREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class GetHostnameSuggestionRequestPrivate;

class QTAWSOPSWORKS_EXPORT GetHostnameSuggestionRequest : public OpsWorksRequest {

public:
    GetHostnameSuggestionRequest(const GetHostnameSuggestionRequest &other);
    GetHostnameSuggestionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHostnameSuggestionRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
