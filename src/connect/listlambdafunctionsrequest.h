// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAMBDAFUNCTIONSREQUEST_H
#define QTAWS_LISTLAMBDAFUNCTIONSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListLambdaFunctionsRequestPrivate;

class QTAWSCONNECT_EXPORT ListLambdaFunctionsRequest : public ConnectRequest {

public:
    ListLambdaFunctionsRequest(const ListLambdaFunctionsRequest &other);
    ListLambdaFunctionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLambdaFunctionsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
