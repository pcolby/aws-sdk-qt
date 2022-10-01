// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROMPTSREQUEST_H
#define QTAWS_LISTPROMPTSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListPromptsRequestPrivate;

class QTAWSCONNECT_EXPORT ListPromptsRequest : public ConnectRequest {

public:
    ListPromptsRequest(const ListPromptsRequest &other);
    ListPromptsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPromptsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
