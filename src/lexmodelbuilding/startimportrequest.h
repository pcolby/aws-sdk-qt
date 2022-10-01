// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTREQUEST_H
#define QTAWS_STARTIMPORTREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class StartImportRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT StartImportRequest : public LexModelBuildingRequest {

public:
    StartImportRequest(const StartImportRequest &other);
    StartImportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartImportRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
