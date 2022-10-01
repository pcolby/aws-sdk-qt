// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONREVISIONSREQUEST_H
#define QTAWS_LISTAPPLICATIONREVISIONSREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListApplicationRevisionsRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT ListApplicationRevisionsRequest : public CodeDeployRequest {

public:
    ListApplicationRevisionsRequest(const ListApplicationRevisionsRequest &other);
    ListApplicationRevisionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationRevisionsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
