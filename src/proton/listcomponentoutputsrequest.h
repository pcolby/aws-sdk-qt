// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTOUTPUTSREQUEST_H
#define QTAWS_LISTCOMPONENTOUTPUTSREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListComponentOutputsRequestPrivate;

class QTAWSPROTON_EXPORT ListComponentOutputsRequest : public ProtonRequest {

public:
    ListComponentOutputsRequest(const ListComponentOutputsRequest &other);
    ListComponentOutputsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentOutputsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
