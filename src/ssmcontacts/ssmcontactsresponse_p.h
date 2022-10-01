// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSMCONTACTSRESPONSE_P_H
#define QTAWS_SSMCONTACTSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class SsmContactsResponse;

class SsmContactsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SsmContactsResponsePrivate(SsmContactsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SsmContactsResponse)
    Q_DISABLE_COPY(SsmContactsResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
