// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLFTAGRESPONSE_H
#define QTAWS_GETLFTAGRESPONSE_H

#include "lakeformationresponse.h"
#include "getlftagrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetLFTagResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT GetLFTagResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    GetLFTagResponse(const GetLFTagRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLFTagRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLFTagResponse)
    Q_DISABLE_COPY(GetLFTagResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
