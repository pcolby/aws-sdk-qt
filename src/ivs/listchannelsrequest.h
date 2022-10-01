// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSREQUEST_H
#define QTAWS_LISTCHANNELSREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class ListChannelsRequestPrivate;

class QTAWSIVS_EXPORT ListChannelsRequest : public IvsRequest {

public:
    ListChannelsRequest(const ListChannelsRequest &other);
    ListChannelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelsRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
