// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLEXBOTSREQUEST_H
#define QTAWS_LISTLEXBOTSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListLexBotsRequestPrivate;

class QTAWSCONNECT_EXPORT ListLexBotsRequest : public ConnectRequest {

public:
    ListLexBotsRequest(const ListLexBotsRequest &other);
    ListLexBotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLexBotsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
