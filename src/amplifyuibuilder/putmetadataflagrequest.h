// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETADATAFLAGREQUEST_H
#define QTAWS_PUTMETADATAFLAGREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class PutMetadataFlagRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT PutMetadataFlagRequest : public AmplifyUIBuilderRequest {

public:
    PutMetadataFlagRequest(const PutMetadataFlagRequest &other);
    PutMetadataFlagRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMetadataFlagRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
