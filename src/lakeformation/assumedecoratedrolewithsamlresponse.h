// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEDECORATEDROLEWITHSAMLRESPONSE_H
#define QTAWS_ASSUMEDECORATEDROLEWITHSAMLRESPONSE_H

#include "lakeformationresponse.h"
#include "assumedecoratedrolewithsamlrequest.h"

namespace QtAws {
namespace LakeFormation {

class AssumeDecoratedRoleWithSAMLResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT AssumeDecoratedRoleWithSAMLResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    AssumeDecoratedRoleWithSAMLResponse(const AssumeDecoratedRoleWithSAMLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssumeDecoratedRoleWithSAMLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssumeDecoratedRoleWithSAMLResponse)
    Q_DISABLE_COPY(AssumeDecoratedRoleWithSAMLResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
