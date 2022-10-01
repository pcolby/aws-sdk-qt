// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSTACKSTOSTACKSETRESPONSE_H
#define QTAWS_IMPORTSTACKSTOSTACKSETRESPONSE_H

#include "cloudformationresponse.h"
#include "importstackstostacksetrequest.h"

namespace QtAws {
namespace CloudFormation {

class ImportStacksToStackSetResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT ImportStacksToStackSetResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ImportStacksToStackSetResponse(const ImportStacksToStackSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportStacksToStackSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportStacksToStackSetResponse)
    Q_DISABLE_COPY(ImportStacksToStackSetResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
