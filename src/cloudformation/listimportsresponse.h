// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTSRESPONSE_H
#define QTAWS_LISTIMPORTSRESPONSE_H

#include "cloudformationresponse.h"
#include "listimportsrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListImportsResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT ListImportsResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ListImportsResponse(const ListImportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListImportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImportsResponse)
    Q_DISABLE_COPY(ListImportsResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
