// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELFTAGRESPONSE_H
#define QTAWS_CREATELFTAGRESPONSE_H

#include "lakeformationresponse.h"
#include "createlftagrequest.h"

namespace QtAws {
namespace LakeFormation {

class CreateLFTagResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT CreateLFTagResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    CreateLFTagResponse(const CreateLFTagRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLFTagRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLFTagResponse)
    Q_DISABLE_COPY(CreateLFTagResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
