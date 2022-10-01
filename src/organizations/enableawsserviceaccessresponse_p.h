// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEAWSSERVICEACCESSRESPONSE_P_H
#define QTAWS_ENABLEAWSSERVICEACCESSRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class EnableAWSServiceAccessResponse;

class EnableAWSServiceAccessResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit EnableAWSServiceAccessResponsePrivate(EnableAWSServiceAccessResponse * const q);

    void parseEnableAWSServiceAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableAWSServiceAccessResponse)
    Q_DISABLE_COPY(EnableAWSServiceAccessResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
