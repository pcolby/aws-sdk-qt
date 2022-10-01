// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETADATAFLAGREQUEST_P_H
#define QTAWS_PUTMETADATAFLAGREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "putmetadataflagrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class PutMetadataFlagRequest;

class PutMetadataFlagRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    PutMetadataFlagRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   PutMetadataFlagRequest * const q);
    PutMetadataFlagRequestPrivate(const PutMetadataFlagRequestPrivate &other,
                                   PutMetadataFlagRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutMetadataFlagRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
