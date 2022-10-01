// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAWSSERVICEACCESSRESPONSE_P_H
#define QTAWS_DISABLEAWSSERVICEACCESSRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class DisableAWSServiceAccessResponse;

class DisableAWSServiceAccessResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit DisableAWSServiceAccessResponsePrivate(DisableAWSServiceAccessResponse * const q);

    void parseDisableAWSServiceAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableAWSServiceAccessResponse)
    Q_DISABLE_COPY(DisableAWSServiceAccessResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
