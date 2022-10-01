// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELAMBDAFUNCTIONREQUEST_H
#define QTAWS_DISASSOCIATELAMBDAFUNCTIONREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateLambdaFunctionRequestPrivate;

class QTAWSCONNECT_EXPORT DisassociateLambdaFunctionRequest : public ConnectRequest {

public:
    DisassociateLambdaFunctionRequest(const DisassociateLambdaFunctionRequest &other);
    DisassociateLambdaFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateLambdaFunctionRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
