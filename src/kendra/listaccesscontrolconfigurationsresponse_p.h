// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSCONTROLCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTACCESSCONTROLCONFIGURATIONSRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class ListAccessControlConfigurationsResponse;

class ListAccessControlConfigurationsResponsePrivate : public KendraResponsePrivate {

public:

    explicit ListAccessControlConfigurationsResponsePrivate(ListAccessControlConfigurationsResponse * const q);

    void parseListAccessControlConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccessControlConfigurationsResponse)
    Q_DISABLE_COPY(ListAccessControlConfigurationsResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
