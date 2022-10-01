// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSCONTROLCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTACCESSCONTROLCONFIGURATIONSREQUEST_P_H

#include "kendrarequest_p.h"
#include "listaccesscontrolconfigurationsrequest.h"

namespace QtAws {
namespace Kendra {

class ListAccessControlConfigurationsRequest;

class ListAccessControlConfigurationsRequestPrivate : public KendraRequestPrivate {

public:
    ListAccessControlConfigurationsRequestPrivate(const KendraRequest::Action action,
                                   ListAccessControlConfigurationsRequest * const q);
    ListAccessControlConfigurationsRequestPrivate(const ListAccessControlConfigurationsRequestPrivate &other,
                                   ListAccessControlConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccessControlConfigurationsRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
