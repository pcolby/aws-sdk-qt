// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTOUTPUTSREQUEST_H
#define QTAWS_LISTENVIRONMENTOUTPUTSREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentOutputsRequestPrivate;

class QTAWSPROTON_EXPORT ListEnvironmentOutputsRequest : public ProtonRequest {

public:
    ListEnvironmentOutputsRequest(const ListEnvironmentOutputsRequest &other);
    ListEnvironmentOutputsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnvironmentOutputsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
