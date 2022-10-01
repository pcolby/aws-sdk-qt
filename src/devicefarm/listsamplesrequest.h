// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAMPLESREQUEST_H
#define QTAWS_LISTSAMPLESREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListSamplesRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListSamplesRequest : public DeviceFarmRequest {

public:
    ListSamplesRequest(const ListSamplesRequest &other);
    ListSamplesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSamplesRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
