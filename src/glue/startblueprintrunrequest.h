// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBLUEPRINTRUNREQUEST_H
#define QTAWS_STARTBLUEPRINTRUNREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class StartBlueprintRunRequestPrivate;

class QTAWSGLUE_EXPORT StartBlueprintRunRequest : public GlueRequest {

public:
    StartBlueprintRunRequest(const StartBlueprintRunRequest &other);
    StartBlueprintRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBlueprintRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
