/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UPDATEAPPROVALRULETEMPLATEDESCRIPTIONRESPONSE_P_H
#define QTAWS_UPDATEAPPROVALRULETEMPLATEDESCRIPTIONRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class UpdateApprovalRuleTemplateDescriptionResponse;

class UpdateApprovalRuleTemplateDescriptionResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit UpdateApprovalRuleTemplateDescriptionResponsePrivate(UpdateApprovalRuleTemplateDescriptionResponse * const q);

    void parseUpdateApprovalRuleTemplateDescriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApprovalRuleTemplateDescriptionResponse)
    Q_DISABLE_COPY(UpdateApprovalRuleTemplateDescriptionResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
