// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEPOLICYTYPERESPONSE_P_H
#define QTAWS_ENABLEPOLICYTYPERESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class EnablePolicyTypeResponse;

class EnablePolicyTypeResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit EnablePolicyTypeResponsePrivate(EnablePolicyTypeResponse * const q);

    void parseEnablePolicyTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnablePolicyTypeResponse)
    Q_DISABLE_COPY(EnablePolicyTypeResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
