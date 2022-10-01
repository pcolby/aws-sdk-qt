// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVPCCONNECTORSREQUEST_H
#define QTAWS_LISTVPCCONNECTORSREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class ListVpcConnectorsRequestPrivate;

class QTAWSAPPRUNNER_EXPORT ListVpcConnectorsRequest : public AppRunnerRequest {

public:
    ListVpcConnectorsRequest(const ListVpcConnectorsRequest &other);
    ListVpcConnectorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVpcConnectorsRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
