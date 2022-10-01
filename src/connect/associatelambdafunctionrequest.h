// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELAMBDAFUNCTIONREQUEST_H
#define QTAWS_ASSOCIATELAMBDAFUNCTIONREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class AssociateLambdaFunctionRequestPrivate;

class QTAWSCONNECT_EXPORT AssociateLambdaFunctionRequest : public ConnectRequest {

public:
    AssociateLambdaFunctionRequest(const AssociateLambdaFunctionRequest &other);
    AssociateLambdaFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateLambdaFunctionRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
